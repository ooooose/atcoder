#!/usr/bin/env ruby
X = gets.chomp.to_i
KEY_WORD = "HelloWorld"
puts KEY_WORD[0...X-1] + KEY_WORD[X...]
