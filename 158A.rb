n ,k = gets.split.map(&:to_i)
count = 0

a = Array.new(n)
a = gets.split(' ').map &:to_i

for i in a
   if i>=a[k-1] && i>0
      count +=1

   end

end
puts count