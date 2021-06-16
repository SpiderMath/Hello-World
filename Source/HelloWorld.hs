--  is a general-purpose, statically typed, purely functional programming language with type inference and lazy evaluation

-- This line specifies that main is of the type IO, which means Input Output actions
-- This is a recommended practice even though the program could actually work without this
main :: IO ()
-- This line does the actual work, putStrLn puts the given string in the line with the line break
main = putStrLn "Hello, World!"
