X, Y, L, R, A, B = gets.chomp.split(" ").map(&:to_i)

if (A <= L && B <= L)
  puts (B - A) * Y
elsif (A <= L && B >= L)
  if (B <= R)
    puts (L - A) * Y + (R - B) * X
  else
    puts (L - A) * Y + (R - L) * X + (B - R) * Y
  end
elsif (A >= L && B >= L)
  if (A >= R)
    puts (B - A) * Y
  elsif (B >= R)
    puts (R - A) * X + (B - R) * Y
  end
elsif (A >= L && B <= L)
  puts (B - A) * X
end
