N = gets.chomp.to_i

target = Array.new(N) {Array.new(N)} 

def replace_char(n, target, char)
  (n-1..N-n).to_a.each do |i| 
    (n-1..N-n).to_a.each do |j| 
      target[i][j] = char 
    end
  end
end

def make_target(n, target)
  if n % 2 == 1
    replace_char(n, target, "#")
  else
    replace_char(n, target, ".")
  end
end

((N + 1) / 2).times do |n|
  make_target(n + 1, target)
end

target.each do |t|
  puts t.join('')
end
