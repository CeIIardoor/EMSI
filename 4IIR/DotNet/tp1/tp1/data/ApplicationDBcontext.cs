using Microsoft.EntityFrameworkCore;
using tp1.Models;

namespace tp1.data
{
    public class ApplicationDBcontext:DbContext
    {
        public ApplicationDBcontext(DbContextOptions<ApplicationDBcontext> options):base(options)
        {

        }
        public DbSet<Category> categories { get; set; }
    }
}
 