namespace day_01
{
    namespace ex_02
    {
        namespace box
        {
            int nb_little_boxes;
            struct other_box
            {
                int nb_little_boxes = 20;
                enum candies {ORANGE, STRAWBERRY};
                int candy;
            };
            namespace little_box
            {
                int candies;
                int nb_little_boxes;
            };
        }
    }
}