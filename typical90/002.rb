def isValid(list)
  score = 0
  list.each do |s|
    if s == "("
      score += 1
    else
      score -= 1
    end

    if score < 0
      return false
    end
  end

  return (score == 0)
end

N = gets.to_i
['(', ')'].repeated_permutation(N).each do |s|
  if isValid(s)
    puts s.join()
  end
end