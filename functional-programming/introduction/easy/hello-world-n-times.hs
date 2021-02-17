{-# LANGUAGE FlexibleInstances, UndecidableInstances, DuplicateRecordFields #-}

module Main where

import Control.Monad
import Data.Array
import Data.Bits
import Data.List
import Data.List.Split
import Data.Set
import Debug.Trace
import System.Environment
import System.IO
import System.IO.Unsafe


--Begin Solution
-----------------------------------------------------------------------------------------
printNTimes 0 = return ()
printNTimes n =
 do
  putStrLn "Hello World"
  printNTimes (n-1)
-----------------------------------------------------------------------------------------
-- End Solution

main :: IO()

main = do
    n <- readLn :: IO Int
    -- Begin Solution
    -----------------------------------------------------------------------------------------
    printNTimes n
    -----------------------------------------------------------------------------------------
    -- End Solution    