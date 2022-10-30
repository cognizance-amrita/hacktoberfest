def birthdayCakeCandles(candles)
    candles.count(candles.max)
end
T = gets.to_i
candles = gets.rstrip.split(' ').map(&:to_i)
result = birthdayCakeCandles candles
puts result
