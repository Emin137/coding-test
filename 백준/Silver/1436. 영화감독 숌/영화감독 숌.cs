int input = int.Parse(Console.ReadLine());
            int count = 0;
            int countOutput = 0;
            int countSix = 0;
            bool SixThree = false;
            while(true)
            {
                string output = count.ToString();
                for (int i = 0; i < output.Length; i++)
                {
                    if (output[i] == '6')
                    {
                        countSix++;
                    }
                    else
                        countSix = 0;
                    if (countSix >= 3)
                        SixThree = true;

                }
                count++;
                if(SixThree == true)
                {
                    countOutput++;
                    if(countOutput == input)
                    {
                        Console.WriteLine(output);
                        return;
                    }
                }
                countSix = 0;
                SixThree = false;
            }