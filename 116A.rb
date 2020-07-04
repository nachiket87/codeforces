n = gets.to_i
answer = 0
max = 0

while(n>0)
    a, b = gets.split.map(&:to_i)
    answer -= a
    answer += b
    if answer > max
        max = answer
    end
    
    n-=1
end
puts max 
