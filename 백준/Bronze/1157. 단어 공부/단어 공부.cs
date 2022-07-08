string inputString = Console.ReadLine();
            inputString = inputString.ToUpper();
            char[] alphabet = new char[26];
            int[] alphabetIndex = new int[26];
            int max=0;
            char output=' ';
            bool same=false;
            for (int i = 0; i < 26; i++)
            {
                alphabet[i] = (char)((int)'A' + i);
            }

            for (int i = 0; i < inputString.Length; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (inputString[i] == alphabet[j])
                        alphabetIndex[j]++;
                }
            }

            for (int i = 0; i < 26; i++)
            {
                if (alphabetIndex[i] > max)
                {
                    max = alphabetIndex[i];
                    same = false;
                    output = alphabet[i];
                }

                else if (alphabetIndex[i] == max)
                    same = true;
            }

            if(same == true)
                Console.WriteLine("?");
            else
                Console.WriteLine(output);