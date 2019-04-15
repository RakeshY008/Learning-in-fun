'''
Author : Rakesh Yadav
Aim : To make a simple calculator in Python
'''
from tkinter import *


experiment = Tk()
experiment.title("GUI EXPERIMENT")
text_Input = StringVar()
operator = ""


def btnClick(numbers):
    global operator
    operator = operator + srt(numbers)
    text_Input.set(operator)


def btnClearDisplay():
    global operator
    operator = ""
    text_Input.set("")


def btnEqualsInput():
    global operator
    sumup = str(eval(operator))
    text_Input.set(sumup)
    operator = ""


txtDisplay = Entry(experiment, font=('arial', 10, 'bold'), textvariable=text_Input, bd=30, insertwidth=4,
                   bg="red", justify='right').grid(columnspan=4)

btn7 = Button(experiment, padx=16, pady=16, bd=8, fg="red", font=('arial', 10, 'bold'),
              text="7", bg="yellow", command=lambda: btnClick(7)).grid(row=1, column=0)

btn8 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="8", bg="yellow", command=lambda: btnClick(8)).grid(row=1, column=1)

btn9 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="9", bg="yellow", command=lambda: btnClick(9)).grid(row=1, column=2)

Addition = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
                  text="+", bg="yellow", command=lambda: btnClick("+")).grid(row=1, column=3)

btn4 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="4", bg="yellow", command=lambda: btnClick(4)).grid(row=2, column=0)

btn5 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="5", bg="yellow", command=lambda: btnClick(5)).grid(row=2, column=1)

btn6 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="6", bg="yellow", command=lambda: btnClick(6)).grid(row=2, column=2)

Subtraction = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
                     text="-", bg="yellow", command=lambda: btnClick("-")).grid(row=2, column=3)

btn1 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="1", bg="yellow", command=lambda: btnClick(1)).grid(row=3, column=0)

btn2 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="2", bg="yellow", command=lambda: btnClick(2)).grid(row=3, column=1)

btn3 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="3", bg="yellow", command=lambda: btnClick(3)).grid(row=3, column=2)

Multiply = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
                  text="*", bg="yellow", command=lambda: btnClick("*")).grid(row=3, column=3)

btn0 = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
              text="0", bg="yellow", command=lambda: btnClick(0)).grid(row=4, column=0)

btnClear = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
                  text="C", bg="yellow", command=btnClearDisplay).grid(row=4, column=1)

btnEqual = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
                  text="=", bg="yellow", command=btnEqualsInput).grid(row=4, column=2)

Division = Button(experiment, padx=16, pady=16, bd=8, fg="black", font=('arial', 10, 'bold'),
                  text="/", bg="yellow", command=lambda: btnClick("/")).grid(row=4, column=3)



experiment.mainloop()

