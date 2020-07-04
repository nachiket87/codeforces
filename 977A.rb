a, b = gets.split.map(&:to_i)
for i in 0...b
    if a%10==0
        a/=10
    else
        a-=1
    end
end
puts a