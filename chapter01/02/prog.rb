# ruby prog.rb

def compose(g, f)
  -> (a) { g.call(f.call(a)) }
end

is_empty = -> (len) { len == 0 }
length = -> (str) { str.length }

is_empty_string = compose(is_empty, length)

puts is_empty_string.call("")
puts is_empty_string.call("nest")