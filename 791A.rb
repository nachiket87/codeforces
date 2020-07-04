a, b = gets.split.map(&:to_i)
years = 0
while(a<=b)
    a = a*3
    b = b*2
    years += 1
end
puts years