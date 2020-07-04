cardTable = gets.to_s
high_cards = ['T', 'J', 'Q', 'K', 'A']

#(high_cards.include? cardTable[0]) 
    #puts "hi"
#end

myCards = gets.split.map(&:to_s)

cardsFirst = myCards.map{|x| x[0]}
cardsSecond = myCards.map{|x| x[-1]}

if((cardsFirst.include? cardTable[0])||(cardsSecond.include? cardTable[1]))
    puts "YES"
else
    puts "NO"
end