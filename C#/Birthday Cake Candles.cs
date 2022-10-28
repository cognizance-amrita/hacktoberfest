public static int birthdayCakeCandles(List<int> candles)
{
    int count = 0;
    int max = 0;
    foreach (var candle in candles)
    {
        int num = candle;
        if(num > max)
        {
            max = num;
            count = 1;
        }
        else if(max == num)
        {
            count++;
        }
    }
    return count;
}