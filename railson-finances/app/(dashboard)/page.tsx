"use client";

import { Button } from "@/components/ui/button";
import { useNewAccount } from "../features/accounts/hooks/use-new-accounts";

const Home = () => {
  const { onOpen } = useNewAccount();
  return (
    <div>
      <p className="text-red-500">jkhggwter</p>
      <Button onClick={onOpen}>wergher</Button>
    </div>
  );
};

export default Home;
