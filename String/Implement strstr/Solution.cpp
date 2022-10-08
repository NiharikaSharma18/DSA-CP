class GfG
{
    int strstr(String s, String x)
    {
        // Your code here
        int i = 0;

        while (i <= (s.length() - x.length()))
        {
            int j = 0;
            for (; j < x.length(); j++)
            {
                if (s.charAt(i + j) != x.charAt(j))
                    break;
            }
            if (j == x.length())
                return i;

            i++;
        }

        return -1;
    }
}