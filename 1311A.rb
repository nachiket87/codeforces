t = gets.chomp.to_i

until t==0
    t-=1
    x, y = gets.split.map(&:to_i)
    if(x>y && (x-y)%2!=0)
        puts 2
    elsif(x>y && (x-y)%2==0)
        puts 1
    elsif(x<y && (y-x)%2==0)
        puts 2
    elsif(x<y && (y-x)%2!=0)
        puts 1
    end
    if(x==y)
        puts 0
    end
    
end