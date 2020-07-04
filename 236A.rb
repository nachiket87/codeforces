require 'set'
s = gets.chomp

s1 = Set.new

for i in 0...s.length
    s1.add(s[i])
end

if s1.length % 2 == 0
    puts "CHAT WITH HER!"
else
    puts "IGNORE HIM!"
end

