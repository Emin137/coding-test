  int[] number = new int[9];
            int maxNumber = 0;
            int checkNumber = 0;

            for (int i = 0; i < 9; i++)
            {
                number[i] = int.Parse(Console.ReadLine());
                if (number[i] > maxNumber)
                {
                    maxNumber = number[i];
                    checkNumber = i+1;
                }
            }
            Console.WriteLine(maxNumber);
            Console.WriteLine(checkNumber);