using PyPlot

file = "D:\\助教\\劉建楠\\濟蓋\\hw13\\pro.txt"

open(file, "r") do io
    global st_arr = split(read(io,String),"\r\n")
end

x = []
y = []

for i in st_arr[1:end-1]
    now = split(i," ")
    append!(x,parse(Float64,now[1]))
    append!(y,parse(Float64,now[2]))
end

title("probability")
pygui(true)
xlabel("x")
ylabel("y(%)")
bar(x,y)
savefig("D:\\助教\\劉建楠\\濟蓋\\hw13\\Prob.png")