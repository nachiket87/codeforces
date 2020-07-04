
n = gets.chomp.to_i

count = 0

while n > 0
   a = gets.chomp 
   if a[0].to_i + a[2].to_i + a[-1].to_i >= 2
      count += 1
   end
   n -= 1
end

puts count

