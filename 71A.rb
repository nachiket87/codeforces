x = gets.chomp.to_i

for i in 0...x do
   words = gets.chomp.to_s 
   if words.length > 10
    puts words[0].to_s + (words.length-2).to_s + words[-1]
   else
    puts words
   end
end
