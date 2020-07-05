-- ghc prog.hs -o a.out
-- ./a.out

import Prelude hiding (id)

id :: a -> a
id x = x

main :: IO ()
main = do putStrLn ("id(1) = " ++ show (id 1))
          putStrLn ("id(life) = " ++ id "life")