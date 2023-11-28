    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    namespace DIP_Before
    {
        class LightBulb
        {
            public void TurnOn()
            {
                Console.WriteLine("Light Bulb is ON");
            }

            public void TurnOff()
            {
                Console.WriteLine("Light Bulb is OFF");
            }
        }

        class Switch
        {
            private LightBulb bulb;

            public Switch()
            {
                bulb = new LightBulb();
            }

            public void Operate()
            {
                bulb.TurnOn();
            }
        }
    }

    namespace DIP_After
    {
        interface ISwitchable
        {
            void TurnOn();
            void TurnOff();
        }

        class LightBulb : ISwitchable
        {
            public void TurnOn()
            {
                Console.WriteLine("Light Bulb is ON");
            }

            public void TurnOff()
            {
                Console.WriteLine("Light Bulb is OFF");
            }
        }

        class Switch
        {
            private ISwitchable device;

            public Switch(ISwitchable device)
            {
                this.device = device;
            }

            public void Operate()
            {
                device.TurnOn();
            }
        }
    }

