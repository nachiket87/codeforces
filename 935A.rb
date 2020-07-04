n = gets.to_i
count = 0

for i in 1...n do
    case (n-i)%i
    when 0
        count+=1
    end
end

puts count
