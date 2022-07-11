string[] input = Console.ReadLine().Split();
            int x=int.Parse(input[0]);
            int y=int.Parse(input[1]);
            int w=int.Parse(input[2]);
            int h=int.Parse(input[3]);

            int xMove,yMove,output;
            output = 0;
            if (w / 2 >= x)
            {
                xMove = x;
            }
            else
                xMove = w-x;

            if (h / 2 >= y)
            {
                yMove = y;
            }
            else
                yMove = h - y;

            if (xMove >= yMove)
                output = yMove;
            else if(xMove<=yMove)
                output = xMove;

            Console.WriteLine(output);