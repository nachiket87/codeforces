k, n, b = gets.split.map(&:to_i)
price = 0

for i in 1..b
    price += i*k
end

if price-n > 0
    puts price-n
else
    puts 0
end



