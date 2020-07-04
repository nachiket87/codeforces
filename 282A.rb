n = gets.to_i
x = 0
while(n>0)
    n-=1
    s = gets.chomp
    if s[0] == "+" || s[-1] == "+"
        x+=1
    elsif s[0] == "-" || s[-1] == "-"
        x-=1
    end
end

puts x

