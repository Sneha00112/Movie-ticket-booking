#include <stdio.h>
int main()
{
    int n, t, i, temp;
    float rs;
    const int rows = 5;
    const int columns = 5;
    int seats[rows][columns];
    char name[20], movie;
    char id, th, dt;
    // Choose the theatre
    printf("Select your theatre\n");
    printf("1.Rohini\n2.Phoenix PVR\n3.Ajanta\n");
    printf("Choose the theatre\n");
    scanf("%d", &th);
    temp = th;
    if (th == 1)
    {
        printf("Entering into Rohini...\n");
    }
    else if (th == 2)
    {
        printf("Entering into Phoenix PVR...\n");
    }
    else if (th == 3)
    {
        printf("Entering into Ajanta...\n");
    }
    printf("------WELCOME TO OUR OFFICIAL PAGE------\n\n\n");
    printf("Printing the name of the movies:\n");
    // Choose the movie you want
    printf("1.Oppenheimer\n2.Leo\n3.Barbie\n\n\n");
    printf("Choose the movie:\n");
    scanf("%d", &id);
    temp = id;
    if (id == 1)
    {
        printf("Entering into the Oppenheimer.....\n");
    }
    else if (id == 2)
    {
        printf("Entering into the Leo.....\n");
    }
    else if (id == 3)
    {
        printf("Entering into the Barbie.....\n");
    }
    else
    {
        printf("Database error.....\n Please Enter write Digits");
        return 0;
    }
    printf("You are entering into the Movie Ticket Booking Section\n\n\n");
    printf("The amount of movie is 350 Rs.per audience\n");
    printf("Number of Audience\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Enter the name of the Audience\n");
        scanf("%s", &name[n]);
    }
    else
    {
        printf("Enter the names of the audiences\n");
        for (i = 0; i < n; i++)
        {
            scanf("%s", &name[n]);
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            seats[i][j] = 0;
        }
    }
    printf("Seat Layout:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
    int selectedRow, selectedColumn;
    for (int amt = 0; amt < n; amt++){
        printf("\nEnter the row number (1-%d): ", rows);
        scanf("%d", &selectedRow);

        printf("Enter the column number (1-%d): ", columns);
        scanf("%d", &selectedColumn);

        // Check if the selected seat is available
        if (selectedRow >= 1 && selectedRow <= rows && selectedColumn >= 1 && selectedColumn <= columns)
        {
            if (seats[selectedRow - 1][selectedColumn - 1] == 0)
            {
                // Seat is available, book it
                seats[selectedRow - 1][selectedColumn - 1] = 1;
                printf("Seat booked successfully!\n");
            }
            else
            {
                // Seat is already booked
                printf("Sorry, the seat is already booked.\n");
                amt-=1;
            }
        }
        else
        {
            // Invalid seat selection
            printf("Invalid seat selection. Please select a seat within the specified range.\n");
        }

    }


       printf("\nUpdated Seat Layout:\n");
       for (int i = 0; i < rows; ++i)
       {
           for (int j = 0; j < columns; ++j)
           {
               printf("%d ", seats[i][j]);
           }
           printf("\n");
       }

    printf("In which date you want to see the movie_:12:2023\n");
    scanf("%d", &dt);
    printf("Choose the time\n 1.10:30\n 2.1:30\n 3.3:30\n 4.7:00\n\n\n");
    scanf("%d", &t);
    if (t == 1)
    {
        printf("Your time is:10:30\n");
    }
    else if (t == 2)
    {
        printf("Your time is:1:30\n");
    }
    else if (t == 3)
    {
        printf("Your time is 3:30\n");
    }
    else
    {
        printf("Your time is:7:00\n");
    }

    printf("Printing all the details of the tickets...\n");
    if (temp == 1)
    {
        printf("Theatre name:Rohini\n");
    }
    else if (temp == 2)
    {
        printf("Theatre name:Phoenix PVR\n");
    }
    else if (temp == 3)
    {
        printf("Theatre name:Ajanta\n");
    }
    else
    {
        printf("Database problem\n");
    }
    if (temp == 1)
    {
        printf("Movie name:Oppenheimer\n");
    }
    else if (temp == 2)
    {
        printf("Movie name:Leo\n");
    }
    else if (temp == 3)
    {
        printf("Movie name:Barbie\n");
    }
    else
    {
        printf("Database problem\n");
    }
    if (t == 1)
    {
        printf("Time is:10:30\n");
    }
    else if (t == 2)
    {
        printf("Time is:1:30\n");
    }
    else if (t == 3)
    {
        printf("Time is:3:30\n");
    }
    else
    {
        printf("Time is:7:00\n");
    }
    printf("Seat Layout is:\n");
    for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                printf("%d ", seats[i][j]);
            }
            printf("\n");
        }
    printf("Date:%d:12:2023\n", dt);
    rs = (n) * 350;
    printf("Amount of Rs:%f\n", rs);
    printf("------Thanking you for entering into the server------\n");
    return 0;
}
