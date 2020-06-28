println("start")
using CSV
using PyPlot 

df = CSV.read("D:\\助教\\劉建楠\\濟蓋\\hw13\\xy.csv")

x = collect(-99:1:10)
y = collect(-100:1:100)

plate = fill(0.0,(length(x),length(y)))

for i in 1:length(df.x)
    plate[df.x[i]+99,df.y[i]+100] += 1
end


X, Y = repeat(x', length(y), 1), repeat(y, 1, length(x))

pygui(true)
contourf(x,y,plate',cmap="jet")
colorbar()
xticks(collect(-100:5:10))
grid()
xlabel("x")
ylabel("y")



