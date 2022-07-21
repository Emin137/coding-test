 string[] input = Console.ReadLine().Split();
            int n = int.Parse(input[0]);  // 세로
            int m = int.Parse(input[1]);  // 가로
            string[] board = new string[n];
            string[] boardW = new string[8];
            string[] boardB = new string[8];
            int minCountW=64;
            int minCountB=64;
            int countW = 0;
            int countB = 0;

            for (int i = 0; i < 8; i++) // W시작 보드 8x8
            {
                if (i % 2 == 0)
                    boardW[i] = "WBWBWBWB";
                else
                    boardW[i] = "BWBWBWBW";
            }

            for (int i = 0; i < 8; i++) // B시작 보드 8x8
            {
                if (i % 2 == 0)
                    boardB[i] = "BWBWBWBW";
                else
                    boardB[i] = "WBWBWBWB";
            }
            
            for (int i = 0; i < n; i++)
            {
                board[i] = Console.ReadLine();
            }

            

            for (int startY = 0; startY < n-7; startY++)
            {
                for (int startX = 0; startX < m-7; startX++)
                {
                    countW = 0;
                    countB = 0;

                    for (int boardY = 0; boardY < 8; boardY++)
                    {
                        for (int boardX = 0; boardX < 8; boardX++)
                        {
                            if (board[boardY + startY][boardX + startX] != boardB[boardY][boardX])
                                countB++;

                            if (board[boardY + startY][boardX + startX] != boardW[boardY][boardX])
                                countW++;
                        }
                    }
                    if(countB<minCountB)
                    {
                        minCountB = countB;
                    }
                    if(countW<minCountW)
                    {
                        minCountW = countW;
                    }
                }
            }
            if(minCountB>minCountW)
                Console.WriteLine(minCountW);
            else
                Console.WriteLine(minCountB);