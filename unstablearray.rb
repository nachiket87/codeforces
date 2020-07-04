t = gets.to_i
until t==0 do
    n, m = gets.split.map(&:to_i)
    puts [2,n-1].min*m
    t-=1

end

