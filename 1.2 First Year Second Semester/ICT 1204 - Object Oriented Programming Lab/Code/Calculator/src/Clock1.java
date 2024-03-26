


import java.util.Calendar;
import java.util.GregorianCalendar;

public class Clock1 extends javax.swing.JFrame {

    public Clock1() {
        initComponents();
        clock();
    }
public void clock()
{
    Thread th;
        th = new Thread()
        {
            public void run()
            {
                try
                {
                    for(;;)
                    {
                        Calendar c1 = new GregorianCalendar();
                        
                        int sec = c1.get(Calendar.SECOND);
                        int min = c1.get(Calendar.MINUTE);
                        int hour = c1.get(Calendar.HOUR);
                        int am_pm = c1.get(Calendar.AM_PM);
                        String m = "";
                        if(am_pm == 1){
                            m = "PM";
                        }
                        else
                        {
                            m = "AM";
                        }
                        txtClock.setText(""+hour+":"+min+":"+sec+" "+m+" ");
                        sleep(1000);
                    }
                }
                catch(Exception x)
                {
                    x.printStackTrace();
                }
            }
        };
        th.start();
}
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        txtClock = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setBackground(new java.awt.Color(204, 255, 255));

        txtClock.setBackground(new java.awt.Color(255, 255, 255));
        txtClock.setFont(new java.awt.Font("Franklin Gothic Demi Cond", 0, 36)); // NOI18N
        txtClock.setForeground(new java.awt.Color(51, 0, 204));
        txtClock.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        txtClock.setText("Digital Clock");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(txtClock, javax.swing.GroupLayout.DEFAULT_SIZE, 474, Short.MAX_VALUE)
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(151, 151, 151)
                .addComponent(txtClock, javax.swing.GroupLayout.PREFERRED_SIZE, 65, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(161, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    
    public static void main(String args[]) {
       
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Clock1().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JPanel jPanel1;
    private javax.swing.JLabel txtClock;
    // End of variables declaration//GEN-END:variables
}
