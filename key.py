import tkinter as tk
import random

def generate_random_numbers():
    root = tk.Tk()
    root.attributes('-fullscreen', True)
    root.configure(background='black')

    window_width = root.winfo_screenwidth()
    window_height = root.winfo_screenheight()
    canvas = tk.Canvas(root, width=window_width, height=window_height, bg='grey10')  # Adjust the color here
    canvas.pack()
    
    def update_numbers():
        for _ in range(10):  # Show 10 numbers per iteration
            number = random.randint(100000000, 999999999)
            x = random.randint(0, window_width)
            y = random.randint(0, window_height)
            canvas.create_text(x, y, text=str(number), fill='white', font=('Arial', 20))
        root.after(500, update_numbers)  # Adjust the delay here (500 milliseconds)

    update_numbers()
    root.mainloop()

generate_random_numbers()

