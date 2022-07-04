string[] input = Console.ReadLine().Split();
            int output = int.Parse(input[0]) * int.Parse(input[0]);
            output += int.Parse(input[1]) * int.Parse(input[1]);
            output += int.Parse(input[2]) * int.Parse(input[2]);
            output += int.Parse(input[3]) * int.Parse(input[3]);
            output += int.Parse(input[4]) * int.Parse(input[4]);
            output %= 10;
            Console.WriteLine(output);