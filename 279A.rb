n = gets.to_i

if(n%2==0)
    puts n/2
    (n/2).times{print 2.to_s + " "}
else
    puts (n-1)/2
    ((n/2)-1).times{print 2.to_s + " "}
    print 3.to_s
    



end