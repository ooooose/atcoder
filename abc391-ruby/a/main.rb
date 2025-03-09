d_hash = {N: "S", E: "W", W: "E", S: "N", NE: "SW", NW: "SE", SE: "NW", SW: "NE"}
d = gets.chomp

puts d_hash[d.to_sym]
