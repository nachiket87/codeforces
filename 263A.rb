m = 0
n = 0
for i in 0...5
    x = gets.split.map(&:to_i)
    for j in 0...5 
        if x[j]==1
            m = j
            n = i
            break
        end
    end
    

end

puts (n-2).abs + (m-2).abs 