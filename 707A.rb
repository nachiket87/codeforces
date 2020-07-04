n = gets.split.map(&:to_i) 
answer = "#Black&White"

until n[0]==0
    x = gets.split.map(&:to_s)
    if((x.include? 'C')||(x.include? 'M')||(x.include? 'Y'))
        answer = "#Color"
    end
    n[0]-=1
end
puts answer