a = gets.split('+').map(&:to_i)
a = a.sort

for i in 0...a.length
    if i == a.length-1
        print("#{a[i]}")
    else
        print("#{a[i]}+")
    end

        

       
end

