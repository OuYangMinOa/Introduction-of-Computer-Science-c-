using PyPlot
PyPlot.PyObject(PyPlot.axes3D)

pygui(true)
n = 10
arr = zeros(n,n) .+ 15
arr[2:n-1,2:n-1] .= 50
arr[3,6] = 100

x = range(1,n,step=1)
y = range(1,n,step=1)
xg = repeat(x',length(x),1)
yg = repeat(y,1,length(y))
pygui(true)
fig = figure(figsize = figaspect(0.5))

arr_d = []
arr_c = []
for k = 1:30
    max = 0
    last_arr = copy(arr)
    for i = 2:n-1
        for j = 2:n-1
            if (i!=3 || j!= 6)
                arr[i,j] = (arr[i+1,j]+arr[i,j+1]+arr[i-1,j]+arr[i,j-1])/4
                if (abs(arr[i,j] - last_arr[i,j])>max)
                    max = abs(arr[i,j] - last_arr[i,j])
                end
            end
        end
    end
    append!(arr_d,[last_arr])
    append!(arr_c,max)
end

for k = 1:30
    cla()
    subplot(1,2,1)
    title("step = $k")
    imshow(arr_d[k])
    subplot(1,2,2,projection="3d")
    title("maximum change = $(arr_c[k])")
    plot_surface(xg,yg,arr_d[k],facecolors=get_cmap("jet").(arr/maximum(arr)))
    pause(0.1)
    savefig("D:\\助教\\劉建楠\\濟蓋\\hw10\\$k.png")
end