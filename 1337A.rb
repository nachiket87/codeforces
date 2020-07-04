t = gets.chomp.to_i

until t==0
    t-=1
    x = gets.split.map(&:to_i)
    puts("#{x[1]} #{x[2]} #{x[2]}")
end