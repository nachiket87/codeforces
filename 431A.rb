a = gets.split.map(&:to_i)
b = gets.chomp.to_s
b = b.each_char.map(&:to_i)
sum = 0

for i in 0..b.length-1
    sum += a[b[i]-1]
end
puts sum



