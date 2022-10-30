def catAndMouse(x, y, z)
  if (x - z).abs < (y - z).abs
    return "Cat A"
  elsif (x - z).abs > (y - z).abs
    return "Cat B"
  else
    return "Mouse C"
  end
end

q = gets.to_i
for i in 1..q do
    xyz = gets.rstrip.split
    x = xyz[0].to_i
    y = xyz[1].to_i
    z = xyz[2].to_i
    result = catAndMouse x, y, z
    puts result
end
