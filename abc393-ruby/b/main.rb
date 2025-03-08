S = gets.chomp

A_matches = S.scan(/A{2,}/)
B_matches = S.scan(/B{2,}/)
C_matches = S.scan(/C{2,}/)

puts A_matches.size + B_matches.size + C_matches.size
