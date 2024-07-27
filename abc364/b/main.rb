H, W = gets.chomp.split(' ').map(&:to_i)
position = gets.chomp.split(' ').map { |a| a.to_i - 1 }

C_list = []
H.times do
  C_list << gets.chomp.split('') 
end
X = gets.chomp.split('')

def adjust_position(x, pos)
  directions = {
    'U' => [-1, 0],
    'L' => [0, -1],
    'R' => [0, 1],
    'D' => [1, 0]
  }

  dx, dy = directions[x]
  new_col = pos[0] + dx
  new_row = pos[1] + dy
  if new_col < 0 || new_col >= H || new_row < 0 || new_row >= W || C_list[new_col][new_row] == '#'
    pos
  else
    [new_col, new_row]
  end
end

X.each do |x|
  new_row, new_col = adjust_position(x, position)

  position[0] = new_row
  position[1] = new_col
end

puts position.map { |p| p + 1 }.join(' ') 
