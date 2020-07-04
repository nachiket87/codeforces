steps = gets.to_i
x = 5
count = 0

while(steps!=0)
    if(steps>=x)
        count += 1
        steps -= x
    else
        x-=1
        
    end
end
puts count


