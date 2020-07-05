-- ghc prog.hs -o a.out
-- ./a.out

isEmpty :: Int -> Bool
isEmpty len = len == 0

isEmptyString :: String -> Bool
isEmptyString = isEmpty . length

main :: IO ()
main = do putStrLn (show (isEmptyString ""))
          putStrLn (show (isEmptyString "next"))