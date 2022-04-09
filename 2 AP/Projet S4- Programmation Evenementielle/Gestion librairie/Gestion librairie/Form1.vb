Public Class Form1
    Dim Total As Integer
    Dim prix As Integer
    Dim qte As Integer
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If ComboBox1.SelectedItem = "Choisir un livre" Then
            MsgBox("Choisis un livre")
        Else
            If ComboBox1.SelectedItem = "A Promised Land" Then
                prix = 12
            ElseIf ComboBox1.SelectedItem = "Too Much and Never Enough" Then
                prix = 15
            ElseIf ComboBox1.SelectedItem = "Where the Crawdads Sing" Then
                prix = 22
            ElseIf ComboBox1.SelectedItem = "My First Learn to Write Workbook" Then
                prix = 33
            ElseIf ComboBox1.SelectedItem = "Untamed" Then
                prix = 20
            End If
            If ComboBox1.SelectedItem = "That Human" Then
                prix = 12
            End If
            qte = TextBox1.Text
                Total += prix * qte
                ListBox1.Items.Add(qte & "x " & ComboBox1.SelectedItem & " - " & prix * qte)
                Label4.Text = Total
            End If

    End Sub
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Total = 0
        Label4.Text = Total
        ListBox1.Items.Clear()
    End Sub
    Private Sub Form1_load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub
End Class
