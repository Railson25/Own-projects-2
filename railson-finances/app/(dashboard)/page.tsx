import { Button } from "@/components/ui/button";
import { UserButton } from "@clerk/nextjs";

const Home = () => {
  return (
    <div>
      <p className="text-red-500">jkhggwter</p>
      <Button>Home page</Button>
      <UserButton afterSignOutUrl="/" />
    </div>
  );
};

export default Home;
