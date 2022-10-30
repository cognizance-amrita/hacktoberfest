def timeConversion(s)
    if s[-2..-1] == "AM"
        if s[0..1] == "12"
            s[0..1] = "00"
        end
    else
        if s[0..1] != "12"
            s[0..1] = (s[0..1].to_i + 12).to_s
        end
    end
    return s[0..-3]
end
s = gets.to_s.rstrip
result = timeConversion s
puts result
